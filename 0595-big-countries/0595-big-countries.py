import pandas as pd

def big_countries(world: pd.DataFrame) -> pd.DataFrame:
    big_countries = world[(world['area'] >= 3000000) | (world['population'] >= 25000000)]
    result = big_countries[['name', 'population', 'area']]
    return result
    