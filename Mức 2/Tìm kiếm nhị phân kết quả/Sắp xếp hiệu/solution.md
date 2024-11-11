# Hướng Dẫn

## Mô tả bài toán
Bài toán yêu cầu tìm giá trị thứ `k` trong dãy `|A[i] - A[j]|` sau khi sắp xếp không giảm với mọi `1 ≤ i < j ≤ n`.

## Giải thích giải thuật
1. **Ý tưởng chính:**
   - Sử dụng tìm kiếm nhị phân trên kết quả
   - Với mỗi giá trị `mid`, ta kiểm tra xem có bao nhiêu cặp số có hiệu không vượt quá `mid`
   - Dựa vào số lượng cặp số tìm được, ta điều chỉnh khoảng tìm kiếm

2. **Chi tiết giải thuật:**
   - Đầu tiên, sắp xếp mảng `A` để tối ưu việc đếm
   - Thực hiện tìm kiếm nhị phân trên đoạn `[0, max(A) - min(A)]`
   - Với mỗi giá trị `mid`:
     + Với mỗi phần tử `A[i]`, tìm số lượng phần tử `A[j]` (j > i) sao cho `|A[j] - A[i]| <= mid`
     + Do mảng đã sắp xếp, ta chỉ cần tìm vị trí đầu tiên lớn hơn `A[i] + mid`
     + Sử dụng `upper_bound()` để tìm vị trí này một cách hiệu quả

3. **Hàm `dem(mid)`:**
   - Đếm số lượng cặp `(i, j)` thỏa mãn `|A[i] - A[j]| <= mid`
   - Nếu số lượng cặp < `k`: cần tăng `mid`
   - Nếu số lượng cặp >= `k`: có thể thử giảm `mid`

## Độ phức tạp
- **Thời gian**: O(n log n × log M)
  + O(n log n) cho việc sắp xếp mảng
  + O(log M) lần tìm kiếm nhị phân, với M là hiệu max(A) - min(A)
  + Mỗi lần đếm mất O(n log n)
- **Không gian**: O(n) để lưu mảng đầu vào

## Code
```cpp
/*
    @author longvuuuu
    @github kuronight29
*/
#include <bits/stdc++.h>
#define taskname ""
#define ll long long
#define pb push_back
using namespace std;

int main() {
    if(fopen((string(taskname) + ".inp").c_str(), "r") != NULL) {
        freopen((string(taskname) + ".inp").c_str(), "r", stdin);
        freopen((string(taskname) + ".out").c_str(), "w", stdout);
    }
    ll n, k;
    cin >> n >> k;
    ll res = 0;
    vector<ll> A(n);
    for(ll i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    auto dem = [&](ll mid) {
        ll res = 0;
        for(ll i = 0; i < n; ++i) {
            res += upper_bound(A.begin() + i + 1, A.end(), A[i] + mid) - (A.begin() + i + 1);
        }
        return res;
    };

    sort(A.begin(), A.end());
    ll left = 0, right = A[n-1] - A[0];
    while(left < right) {
        ll mid = left + (right - left) / 2;
        if(dem(mid) < k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    cout << left << endl;
    return 0;
}
