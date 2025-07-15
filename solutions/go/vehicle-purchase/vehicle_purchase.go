package purchase

func NeedsLicense(kind string) bool {
	return kind == "car" || kind == "truck"
}

func ChooseVehicle(option1, option2 string) string {
	const better string = " is clearly the better choice."
    if option1 < option2 {
    	return option1 + better
    }
    return option2 + better
}

func CalculateResellPrice(originalPrice, age float64) float64 {
    var discountFactor float64 = 0.5
	if age < 10 {
    	discountFactor = 0.7
    }
    if age < 3 {
    	discountFactor = 0.8
    }
    return discountFactor * originalPrice
}
