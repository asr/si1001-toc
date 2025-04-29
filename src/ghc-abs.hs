main :: IO ()
main = do
  let maxInt = maxBound :: Int
      minInt = minBound :: Int
  print $ "Maximum Int (maxBound :: Int, 2^63 - 1): " ++ show maxInt
  print $ "Minimum Int (minBound :: Int, -2^63): " ++ show minInt
  print $ "Absolute value of (minBound :: Int) (error): " ++
    show (abs minInt)
