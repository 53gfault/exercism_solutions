import java.time.LocalDate;
import java.time.LocalDateTime;

class Gigasecond {

    LocalDateTime given;
    Gigasecond(LocalDate moment) {
       given = moment.atStartOfDay();
    }

    Gigasecond(LocalDateTime moment) {
       given = moment;
    }

    LocalDateTime getDateTime() {
       return given.plusSeconds( 1000000000 );
    }

}
