uniao :: [Int] -> [Int]
uniao [] = []
uniao [a] = [a]
uniao (x:xs) = x:(uniao $ filter (/=x) xs)

main = do
	input1 <- getLine
	input2 <- getLine
	let input = (read input1) ++ (read input2)
	print (uniao input)


