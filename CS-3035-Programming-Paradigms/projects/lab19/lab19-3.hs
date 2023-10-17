gradeFinder :: (RealFloat a) => a -> String
gradeFinder :: x
    | x > 90 = "A"
    | x > 80 = "B"
    | x > 70 = "C"
    | otherwise = "Failing"

main = do
    print( gradeFinder 78.2 )
