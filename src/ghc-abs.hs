main :: IO ()
main = do
  let maxInt = maxBound :: Int
      minInt = minBound :: Int
  print $ "Maximum Int (maxBound :: Int): " ++ show maxInt
  print $ "Minimum Int (minBound :: Int): " ++ show minInt
  print $ "Absolute value of (minBound :: Int) (error): " ++
    show (abs minInt)
