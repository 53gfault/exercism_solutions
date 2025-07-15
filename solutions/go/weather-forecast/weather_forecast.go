// Package weather is for meteorological operations.
package weather

// CurrentCondition represents the current condition.
var CurrentCondition string

// CurrentLocation represents the current location.
var CurrentLocation string

// Forecast function forecasts the condition at the current location.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
