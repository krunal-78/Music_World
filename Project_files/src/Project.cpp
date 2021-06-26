#include<bits/stdc++.h>
#include<windows.h>
#include "Project.h"
using namespace std;
Project::Project()
{
    notes = Notes;
    major_scale = Major_Scale;
    minor_scale = Minor_Scale;
    major_chord = Major_Chord;
    minor_chord = Minor_Chord;
    major_arpeggio = Major_Arpeggio;
    minor_arpeggio = Minor_Arpeggio;
}
void Project::Display_Notes()
{
    for(int i=0;i<12;i++)
        cout<<notes[i]<<" ";
    cout<<endl;
}
bool Project::Check_Root(string root)
{
    for(int i=0;i<12;i++)
    {

        if(root==notes[i])
        {
            return true;
        }
    }
    return false;
}
void Project::Generate_MajorScale(string root)
{



    string ans_majorscale[8];
    int i;
    for (i = 0; i < 12; i++)
    {
        if (root == notes[i])
        {
            break;
        }
    }
    int j = i;
    for (i = 0; i < 8; i++)
    {
        j = (j + major_scale[i]) % 12;
        ans_majorscale[i] = notes[j];
    }
    for (i = 0; i < 8; i++)
    {
        cout << ans_majorscale[i] << " ";
    }
    cout << endl;


}
void Project::Generate_MinorScale(string root)
{
    //string
    string ans_minorscale[8];
    int i;
    for (i = 0; i < 12; i++)
    {
        if (root == notes[i])
        {
            break;
        }
    }
    int j = i;
    for (i = 0; i < 8; i++)
    {
        j = (j + minor_scale[i]) % 12;
        ans_minorscale[i] = notes[j];
    }
    for (i = 0; i < 8; i++)
    {
        cout << ans_minorscale[i] << " ";
    }
    cout << endl;
}
void Project::Generate_MajorChord(string root)
{
    //string
    string ans_majorchord[3];
    int i;
    for (i = 0; i < 12; i++)
    {
        if (root == notes[i])
        {
            break;
        }
    }
    int j = i;
    for (i = 0; i < 3; i++)
    {
        j = (j + major_chord[i]) % 12;
        ans_majorchord[i] = notes[j];
    }
    for (i = 0; i < 3; i++)
    {
        cout << ans_majorchord[i] << " ";
    }
    cout << endl;
}
void Project::Generate_MinorChord(string root)
{
    //string
    string ans_minorchord[3];
    int i;
    for (i = 0; i < 12; i++)
    {
        if (root == notes[i])
        {
            break;
        }
    }
    int j = i;
    for (i = 0; i < 3; i++)
    {
        j = (j + minor_chord[i]) % 12;
        ans_minorchord[i] = notes[j];
    }
    for (i = 0; i < 3; i++)
    {
        cout << ans_minorchord[i] << " ";
    }
    cout << endl;
}
void Project::Generate_MajorArpeggio(string root)
{
    //string
    string ans_majorarpeggio[8];
    int i;
    for (i = 0; i < 12; i++)
    {
        if (root == notes[i])
        {
            break;
        }
    }
    int j = i;
    for (i = 0; i < 8; i++)
    {
        j = (j + major_arpeggio[i]) % 12;
        if (j < 0)
            j += 12;
        ans_majorarpeggio[i] = notes[j];
    }
    for (i = 0; i < 8; i++)
    {
        cout << ans_majorarpeggio[i] << " ";
    }
    cout << endl;
}
void Project::Generate_MinorArpeggio(string root)
{
    //string
    string ans_minorarpeggio[8];
    int i;
    for (i = 0; i < 12; i++)
    {
        if (root == notes[i])
        {
            break;
        }
    }
    int j = i;
    for (i = 0; i < 8; i++)
    {
        j = (j + minor_arpeggio[i]) % 12;
        if (j < 0)
            j += 12;
        ans_minorarpeggio[i] = notes[j];
    }
    for (i = 0; i < 8; i++)
    {
        cout << ans_minorarpeggio[i] << " ";
    }
    cout << endl;
}
void Project::Play_MajorChord(string root)
{
    if (root == "C")
    {
        PlaySound(TEXT("C.wav"), NULL, SND_SYNC);
    }
    else if (root == "C#")
    {
        PlaySound(TEXT("C#.wav"), NULL, SND_SYNC);
    }
    else if (root == "D")
    {
        PlaySound(TEXT("D.wav"), NULL, SND_SYNC);
    }
    else if (root == "D#")
    {
        PlaySound(TEXT("D#.wav"), NULL, SND_SYNC);
    }
    else if (root == "E")
    {
        PlaySound(TEXT("E.wav"), NULL, SND_SYNC);
    }
    else if (root == "F")
    {
        PlaySound(TEXT("F.wav"), NULL, SND_SYNC);
    }
    else if (root == "F#")
    {
        PlaySound(TEXT("F#.wav"), NULL, SND_SYNC);
    }
    else if (root == "G")
    {
        PlaySound(TEXT("G.wav"), NULL, SND_SYNC);
    }
    else if (root == "G#")
    {
        PlaySound(TEXT("G#.wav"), NULL, SND_SYNC);
    }
    else if (root == "A")
    {
        PlaySound(TEXT("A.wav"), NULL, SND_SYNC);
    }
    else if (root == "A#")
    {
        PlaySound(TEXT("A#.wav"), NULL, SND_SYNC);
    }
    else if (root == "B")
    {
        PlaySound(TEXT("B.wav"), NULL, SND_SYNC);
    }
}
void Project::Play_MinorChord(string root)
{
    if (root == "C")
    {
        PlaySound(TEXT("Cm.wav"), NULL, SND_SYNC);
    }
    else if (root == "C#")
    {
        PlaySound(TEXT("C#m.wav"), NULL, SND_SYNC);
    }
    else if (root == "D")
    {
        PlaySound(TEXT("Dm.wav"), NULL, SND_SYNC);
    }
    else if (root == "D#")
    {
        PlaySound(TEXT("D#m.wav"), NULL, SND_SYNC);
    }
    else if (root == "E")
    {
        PlaySound(TEXT("Em.wav"), NULL, SND_SYNC);
    }
    else if (root == "F")
    {
        PlaySound(TEXT("Fm.wav"), NULL, SND_SYNC);
    }
    else if (root == "F#")
    {
        PlaySound(TEXT("F#m.wav"), NULL, SND_SYNC);
    }
    else if (root == "G")
    {
        PlaySound(TEXT("Gm.wav"), NULL, SND_SYNC);
    }
    else if (root == "G#")
    {
        PlaySound(TEXT("G#m.wav"), NULL, SND_SYNC);
    }
    else if (root == "A")
    {
        PlaySound(TEXT("Am.wav"), NULL, SND_SYNC);
    }
    else if (root == "A#")
    {
        PlaySound(TEXT("A#m.wav"), NULL, SND_SYNC);
    }
    else if (root == "B")
    {
        PlaySound(TEXT("Bm.wav"), NULL, SND_SYNC);
    }
}
void Project::Play_MinorScale(string root)
{
    if (root == "C")
    {
        PlaySound(TEXT("Cm_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "C#")
    {
        PlaySound(TEXT("C#m_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "D")
    {
        PlaySound(TEXT("Dm_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "D#")
    {
        PlaySound(TEXT("D#m_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "E")
    {
        PlaySound(TEXT("Em_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "F")
    {
        PlaySound(TEXT("Fm_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "F#")
    {
        PlaySound(TEXT("F#m_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "G")
    {
        PlaySound(TEXT("Gm_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "G#")
    {
        PlaySound(TEXT("G#m_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "A")
    {
        PlaySound(TEXT("Am_scale.wav"), NULL, SND_SYNC);
    }

    else if (root == "A#")
    {
        PlaySound(TEXT("A#m_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "B")
    {
        PlaySound(TEXT("Bm_scale.wav"), NULL, SND_SYNC);
    }
}
void Project::Play_MajorScale(string root)
{
    if (root == "C")
    {
        PlaySound(TEXT("C_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "C#")
    {
        PlaySound(TEXT("C#_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "D")
    {
        PlaySound(TEXT("D_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "D#")
    {
        PlaySound(TEXT("D#_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "E")
    {
        PlaySound(TEXT("E_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "F")
    {
        PlaySound(TEXT("F_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "F#")
    {
        PlaySound(TEXT("F#_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "G")
    {
        PlaySound(TEXT("G_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "G#")
    {
        PlaySound(TEXT("G#_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "A")
    {
        PlaySound(TEXT("A_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "A#")
    {
        PlaySound(TEXT("A#_scale.wav"), NULL, SND_SYNC);
    }
    else if (root == "B")
    {
        PlaySound(TEXT("B_scale.wav"), NULL, SND_SYNC);
    }
}
void Project::Play_MajorArpeggio(string root)
{
    if (root == "C")
    {
        PlaySound(TEXT("C_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "C#")
    {
        PlaySound(TEXT("C#_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "D")
    {
        PlaySound(TEXT("D_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "D#")
    {
        PlaySound(TEXT("D#+arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "E")
    {
        PlaySound(TEXT("E_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "F")
    {
        PlaySound(TEXT("F_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "F#")
    {
        PlaySound(TEXT("F#_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "G")
    {
        PlaySound(TEXT("G_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "G#")
    {
        PlaySound(TEXT("G#_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "A")
    {
        PlaySound(TEXT("A_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "A#")
    {
        PlaySound(TEXT("A#_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "B")
    {
        PlaySound(TEXT("B_arpg.wav"), NULL, SND_SYNC);
    }
}
void Project::Play_MinorArpeggio(string root)
{
    if (root == "C")
    {
        PlaySound(TEXT("Cm_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "C#")
    {
        PlaySound(TEXT("C#m_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "D")
    {
        PlaySound(TEXT("Dm_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "D#")
    {
        PlaySound(TEXT("D#m_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "E")
    {
        PlaySound(TEXT("Em_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "F")
    {
        PlaySound(TEXT("Fm_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "F#")
    {
        PlaySound(TEXT("F#m_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "G")
    {
        PlaySound(TEXT("Gm_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "G#")
    {
        PlaySound(TEXT("G#m_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "A")
    {
        PlaySound(TEXT("Am_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "A#")
    {
        PlaySound(TEXT("A#m_arpg.wav"), NULL, SND_SYNC);
    }
    else if (root == "B")
    {
        PlaySound(TEXT("Bm_arpg.wav"), NULL, SND_SYNC);
    }
}
