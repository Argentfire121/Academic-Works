myLength :: (Num a) => [a] -> a -> a
myLength [] = error "This list is empty"
myLength (x, _) = (myLength _) + 1

main = do
    print ( myLength [5,5,7,3] )
