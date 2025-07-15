import java.time.LocalDate;
import java.time.LocalDateTime;

class Gigasecond {

    private final LocalDateTime given;
    Gigasecond(LocalDate moment) {
       this( moment.atStartOfDay() );
    }

    Gigasecond(LocalDateTime moment) {
       given = moment;
    }

    LocalDateTime getDateTime() {
       return given.plusSeconds( 1_000_000_000 );
    }

}
