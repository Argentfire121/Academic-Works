isNum::Int -> Bool -- isNum function
isNum 5 = True 
isNum x = False

fib::Int -> Int -- fibonacci function
fib 0 = 0 
fib 1 = 1 
fib n = fib (n - 1) + fib (n - 2) 

fibList::Int -> [Int] -- fibonacci list function
fibList n = [fib x |x <- [0..n]] 

justHighScorerList:: (Ord a, Num a) => [([Char], a)] -> [[Char]]
justHighScorerList grades = [justHighScorer (n, g) | (n, g) <- grades]

justHighScorer:: (Ord a, Num a) => ([Char], a) -> [Char]
justHighScorer (n, g) 
    | g >= 95 = n
    | otherwise = ""

secondLastElement:: [a] -> a
secondLastElement [] = error "Called last on empty list" 
secondLastElement (x:y:[]) = y 
secondLastElement (x:xs) = secondLastElement xs 

main = do

let x = 5

let students = ["Andy", "Beatrice", "Carlos", "David", "Eunice"]
let grades = [95, 92, 83, 95, 81]

print(isNum x)
print(isNum 80)
print(fibList x)
print(secondLastElement grades)
-- print(justHighScorerList grades)
