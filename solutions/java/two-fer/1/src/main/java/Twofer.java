class Twofer {
    String twofer(String name) {
	String namestr;
        if( name == null || name.equals( "" ) )
	     namestr = "you";
	else
	     namestr = name;
	return "One for " + namestr + ", one for me.";
    }
}
