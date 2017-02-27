rps player_test(int round,rps *myhist,rps *opphist) {
	if(round!=0){
    	if(opphist[round-1]==Paper) return Scissors;
    	else if(opphist[round-1]==Scissors) return Rock;
    	else if(opphist[round-1]==Rock) return Paper;
    	else return Rock;
	}
	else return Rock;
	
}

register_player(player_test,"test");
