package techpalace
import "strings"

func WelcomeMessage(customer string) string {
    return("Welcome to the Tech Palace, " + strings.ToUpper(customer))
}

func AddBorder(welcomeMsg string, numStarsPerLine int) string {
    var border_string string = strings.Repeat("*", numStarsPerLine)
	return(border_string + "\n" + welcomeMsg + "\n" + border_string)
}

func CleanupMessage(oldMsg string) string {
	return strings.TrimSpace(strings.Replace(oldMsg, "*", "", -1))
}
