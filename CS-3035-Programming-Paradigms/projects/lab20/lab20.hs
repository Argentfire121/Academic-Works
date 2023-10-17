pythagoreanTriple = [(a,b,c) | a <- [1..15], b <- [1..15], c <- [1..15], a<=b, b<=c, sqrt ( a^2 + b^2 ) == c]

main = do
    print( pythagoreanTriple )
