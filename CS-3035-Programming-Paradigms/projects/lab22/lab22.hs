aprGenerator :: Int -> Int
aprGenerator a
    | a < 500 = 23
    | a < 600 = 11
    | a < 700 = 8
    | a < 800 = 5
    | a < 851 = 3
    | otherwise = -1 

main = do
    print( "For a credit score of 700, your APR would be "++ show ( aprGenerator 700 ) ++"%" )
    print( "For a credit score of 825, your APR would be "++ show ( aprGenerator 825 ) ++"%" )
