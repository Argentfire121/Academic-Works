countContains :: (Eq a) => [a] -> a -> Int
countContains [] _ = 0
countContains (x:xs) n
    | x == n = 1 + countContains xs n
    | otherwise = countContains xs n

main = do
    countContains "Godzilla" 'G'
    countContains "Godzilla" 'i'
    countContains "Godzilla" 'b'

    let mBros = ["Harpo", "Beppo", "Groucho"]
    countContains mBros "Godzilla"
    countContains mBros "Groucho"
    let mBros = ["Harpo", "Beppo", "Groucho", "Beppo"]
    countContains mBros "Groucho"
    countContains mBros "Beppo"
