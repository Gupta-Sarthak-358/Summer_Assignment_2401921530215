package week_2.OOPS.live;
import week_2.OOPS.music.Playable;
import week_2.OOPS.music.string.Veena;
import week_2.OOPS.music.wind.Saxophone;


public class Test {
    public static void main(String[] args) {
        Veena veena = new Veena();
        Saxophone saxophone = new Saxophone();

        veena.play();
        saxophone.play();

        Playable playableVeena = veena;
        Playable playableSaxophone = saxophone;
        playableVeena.play();
        playableSaxophone.play();
    }
}   
