sum_by_rows:
	g++ vkteam/deepcpp/02/sum_by_rows.cpp -o sum_by_rows --std=c++11 -O2 

sum_by_cols:
	g++ vkteam/deepcpp/02/sum_by_cols.cpp -o sum_by_cols --std=c++11 -O2 

check:
	valgrind --tool=cachegrind ./sum_by_rows

hello:
	echo "Hello, World"
