package partyrobot
import "fmt"

func Welcome(name string) string {
    return fmt.Sprintf("Welcome to my party, %s!", name)
}

func HappyBirthday(name string, age int) string {
    return fmt.Sprintf(
        "Happy birthday %s! You are now %d years old!", name, age,
    )
}

func AssignTable(name string, table int, neighbor, direction string, distance float64) string {
	const directions string = "\nYou have been assigned to table %03d. " +
    	"Your table is %s, exactly %.1f meters from here." +
        "\nYou will be sitting next to %s."
    return Welcome(name) + fmt.Sprintf(directions, table, direction, distance, neighbor)
}
