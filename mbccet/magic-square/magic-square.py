magic_square = []
dim = int(input("Enter the box dimension (odd number): "))

if (dim % 2) != 0:

	for i in range(dim):
	    magic_square.append(list())
	    for j in range(dim):
	        magic_square[i].append(0)
	        
	rounds = 0
	total_rounds = dim**2

	x, y = 0, (dim - 1) // 2
	num = 1

	while rounds < total_rounds:
	    
	    if magic_square[x][y] == 0:
	        magic_square[x][y] = num
	    else:
	        x += 1
	        magic_square[x][y] = num
	    
	    if x == 0:
	        x = dim - 1
	    else:
	        x -= 1
	        
	    if y == (dim - 1):
	        y = 0
	    else:
	        y += 1
	        
	    num += 1
	    rounds += 1

	# BEAUTIFIED PRINT
	# for row in magic_square:
	# 	print("| ", end="")
	# 	for each_number in row:
	# 		print(each_number, end=" | ")
	# 	print()

	print()
	for row in magic_square:
		print(row)

	print("\nSum of each dimension: ", sum(row))

else:
	print("Please enter an odd number")
