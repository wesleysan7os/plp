iesimo :: [Int] -> Int -> Int
iesimo (x:xs) 1 = x
iesimo (x:xs) i = iesimo xs (i-1) 

main = do 
	input <- getLine
	input2 <- getLine
	print ( iesimo (read input) (read input2) )


