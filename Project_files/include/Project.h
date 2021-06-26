#ifndef PROJECT_H
#define PROJECT_H
#include<bits/stdc++.h>
using namespace std;
static const string Notes[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
static const int Major_Scale[8] = {0, 2, 2, 1, 2, 2, 2, 1};
static const int Minor_Scale[8] = {0, 2, 1, 2, 2, 1, 2, 2};
static const int Major_Chord[3] = {0,4,3};
static const int Minor_Chord[3] = {0,3,4};
static const int Major_Arpeggio[8] = {0,7,5,-5,9,-9,5,-5};
static const int Minor_Arpeggio[8] = {0,7,5,-5,8,-8,5,-5};
class Project
{
private:
    const string* notes;
    const int* major_scale;
    const int* minor_scale;
    const int* major_chord;
    const int* minor_chord;
    const int* major_arpeggio;
    const int* minor_arpeggio;

public:
    Project();
    void Display_Notes();
    bool Check_Root(string root);
    void Generate_MajorScale(string root);
    void Generate_MinorScale(string root);
    void Generate_MajorChord(string root);
    void Generate_MinorChord(string root);
    void Generate_MajorArpeggio(string root);
    void Generate_MinorArpeggio(string root);
    void Play_MajorScale(string root);
    void Play_MinorScale(string root);
    void Play_MajorChord(string root);
    void Play_MinorChord(string root);
    void Play_MajorArpeggio(string root);
    void Play_MinorArpeggio(string root);
};

#endif // PROJECT_H
