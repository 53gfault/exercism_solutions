import java.util.*;

class Scrabble {

	Map< Character, Integer > scores = new HashMap<>();
	String word;

	Scrabble(String word) {
		scores.put( 'A', 1 );
		scores.put( 'E', 1 );
		scores.put( 'I', 1 );
		scores.put( 'O', 1 );
		scores.put( 'U', 1 );
		scores.put( 'L', 1 );
		scores.put( 'N', 1 );
		scores.put( 'R', 1 );
		scores.put( 'S', 1 );
		scores.put( 'T', 1 );
		scores.put( 'D', 2 );
		scores.put( 'G', 2 );
		scores.put( 'B', 3 );
		scores.put( 'C', 3 );
		scores.put( 'M', 3 );
		scores.put( 'P', 3 );
		scores.put( 'F', 4 );
		scores.put( 'H', 4 );
		scores.put( 'V', 4 );
		scores.put( 'W', 4 );
		scores.put( 'Y', 4 );
		scores.put( 'K', 5 );
		scores.put( 'J', 8 );
		scores.put( 'X', 8 );
		scores.put( 'Q', 10 );
		scores.put( 'Z', 10 );

		this.word = word;
    }

    int getScore() {
		int total = 0;
		word = word.toUpperCase();
		for( int i = 0; i < word.length(); i++ ) {
			char ch = word.charAt( i );
			total += scores.getOrDefault( ch, 0 );
		}
		return total;
    }

}
