#ifndef MAZE_H
#define MAZE_H
#include <QList>
#include <QPoint>

class Maze
{
public:
    Maze();
    //height and width must > 2
    Maze(int h, int w);
    //for loading form jason
    Maze(int h, int w, QList<int> map);
    Maze(const Maze& other);
    Maze& operator=(Maze other);
    //edit maze methods
    bool changeStartTo(int x, int y);
    bool addWall(int x, int y);
    bool addCoin(int x, int y);
    bool addSpace(int x, int y);
    //game play method
    bool collectCoin(int x, int y);
    int getObject(int x, int y);
    bool clear();
    //for saving to jason
    QList<int> getMap();
    int getHeight();
    int getWidth();
    //object definitions
    const int space = 0;
    const int start = 1;
    const int wall = 2;
    const int coin = 3;
private:
    QPoint startPoint = QPoint(1, 1);
    int height;
    int width;
    int coins;
    QList<int> map;
    //helper
    void fillEdgesWithWalls();
    int getIndex(QPoint postion);
    int& objectAt(int x, int y);
};

#endif // MAZE_H
