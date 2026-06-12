package Week_2.oops_2.live;

import Week_2.oops_2.music.playable;
import Week_2.oops_2.music.string.veena;
import Week_2.oops_2.music.wind.saxophone;

public class test {

    public static void main(String[] args) {

        veena veena = new veena();
        veena.play();

        saxophone saxophone = new saxophone();
        saxophone.play();

        playable p;
        p = veena;
        p.play();
        p = saxophone;
        p.play();
    }
}