-- Dexter Kale CS 3035 - 05

firstHalf :: [a] -> [a]
firstHalf xs = take (ceiling (fromIntegral (length xs) / 2)) xs 

secondHalf :: [a] -> [a]
secondHalf xs = take (floor (fromIntegral (length xs) / 2)) (reverse xs)

merge :: (Ord a) => [a] -> [a] -> [a]
merge xs ys
    | length xs <= 0 || length ys <= 0 = xs ++ ys
    | head xs <= head ys = (head xs):(merge xs ys)  
    | head ys < head xs = (head ys):(merge xs ys)

mergeSort :: (Ord a) => [a] -> [a]
mergeSort xs
    | length xs < 2 = xs
    | otherwise = merge (mergeSort (firstHalf xs)) (mergeSort (secondHalf xs))

main = do
    let a = 1
    print(a) -- solely to stop IO main error
