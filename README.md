# lab3 - A
make 
# lab3 - B

比較1000~1000000的數據,看到資料越龐大處理的時間越久
我覺得是因為InsertSort的演算方式不適合處理大量資料

INFO.Size 1000 :

sort(): 0.000144 seconds 

v1/v2 are different.

insertion_sort(): 0.006063 seconds

v1/v2 are the same.

INFO.Size 10000 :

sort(): 0.002075 seconds

v1/v2 are different.

insertion_sort(): 0.595807 seconds

v1/v2 are the same.

INFO.Size 100000 :

sort(): 0.023679 seconds

v1/v2 are different.

insertion_sort(): 59.4754 seconds

v1/v2 are the same.

INFO.Size 1000000 :

sort(): 0.279887 seconds

v1/v2 are different.

insertion_sort(): 6077.02 seconds

v1/v2 are the same.
