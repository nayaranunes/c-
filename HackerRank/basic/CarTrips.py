# There is a car with a certain number of seats that only drives forward in a single road 1000km long.
# You are given the capacity of the car and an array of trips in which each trip has:
# - The number of passengers
# - The pickup location
# - The drop-off location
# Example: given the trip (2,1,5), it means that 2 passengers will be picked up at 1st km and dropped off at 5th.


def fill_road(road, pickup, drop_off):
    start = pickup

    while start < drop_off:
        if road[start] == 0:
            road[start] = 1
            start += 1
        else:
            return None
    return road


def trips_allowed(trips, capacity):

    road = [0] * 100

    for trip in trips:

        # trip[0], trip[1], trip[2] = [(trip1)]
        passengers, pickup, drop_off = trip

        if passengers > capacity or pickup > drop_off:
            return False
        road = fill_road(road, pickup, drop_off)
        if road is None:
            return False
    return True


if __name__ == '__main__':
    print(trips_allowed([(2, 1, 5), (2, 5, 7)], 4))
    print(trips_allowed([(2, 3, 5), (4, 4, 74)], 4))
    print(trips_allowed([(2, 1, 5), (7, 5, 7)], 4))
