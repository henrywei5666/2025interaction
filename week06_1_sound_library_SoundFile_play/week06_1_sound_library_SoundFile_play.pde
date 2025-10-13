//week06_1_sound_library_SoundFile_play
// File-Preference 字型改大一點
// Sketch-Library-ManageLibraries, 找 Sound 安裝
// File-Examples-Libraries核心函式庫-Sound-soundfile-SimplePlayback
// 這個範例有聲音、有相關的函式可學習參考
import processing.sound.*; //使用聲音的外掛模組
SoundFile sound; //宣告SoundFile 物件變數
void setup(){
  size(500, 400); //視窗大小
  sound = new SoundFile(this, "music.mp3");
  //老師把"Music.mp3"傳給你,把它拉到程式裡
  sound.play();
}  
void draw(){

}
