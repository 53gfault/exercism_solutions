import java.util.concurrent.ThreadLocalRandom;

class DnDCharacter {

	private static final int THROWS=4, DICE_MIN=1, DICE_MAX=6;
	private int strength, dexterity, constitution, intelligence, wisdom, charisma;

	DnDCharacter() {
		strength = ability();
		dexterity = ability();
		constitution = ability();
		intelligence = ability();
		wisdom = ability();
		charisma = ability();
	}

    int ability() {
		int minScore = DICE_MAX + 1, score = 0, totalScore = 0;
		for( int diceThrow = 0; diceThrow < THROWS; diceThrow++ ) {
			score = ThreadLocalRandom.current().nextInt( DICE_MIN, DICE_MAX + 1 );
			if( score < minScore )
				minScore = score;
			totalScore += score;
		}
		return totalScore - minScore;
    }

    int modifier(int input) {
		return Math.floorDiv( input - 10, 2 );
    }

    int getStrength() {
		return strength;
    }

    int getDexterity() {
		return dexterity;
    }

    int getConstitution() {
		return constitution;
    }

    int getIntelligence() {
		return intelligence;
    }

    int getWisdom() {
		return wisdom;
    }

    int getCharisma() {
		return charisma;
    }

    int getHitpoints() {
        return modifier( getConstitution() ) + 10;
    }

}
