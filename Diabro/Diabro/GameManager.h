/*
-----------------------------------------------------------------------------
Filename:    GameManager.h
-----------------------------------------------------------------------------
*/

#ifndef __GameManager_h_
#define __GameManager_h_

#include "Player.h"
#include "Npc.h"
#include "BaseApplication.h"


//---------------------------------------------------------------------------

class GameManager : public BaseApplication
{
public:
	GameManager(void);
	~GameManager(void);

protected:
    virtual void createScene(void);
	virtual void createCamera(void);
	virtual void createViewports(void);

	static void createGroundMesh();
	static void setupLights(Ogre::SceneManager*);

private:
	virtual bool frameRenderingQueued(const Ogre::FrameEvent& fe);
	virtual bool keyPressed(const OIS::KeyEvent& ke);
	virtual bool keyReleased(const OIS::KeyEvent& ke);
	virtual bool mouseMoved(const OIS::MouseEvent& me);
	virtual bool mousePressed(const OIS::MouseEvent& me, OIS::MouseButtonID id);
	virtual bool mouseReleased(const OIS::MouseEvent& me, OIS::MouseButtonID id);

	Player _playerScript;
	Npc _npcScript;
	Ogre::Entity* _playerEntity;
	Ogre::Entity*_npcEntity;
	Ogre::Degree _startPitchCam;
};

//---------------------------------------------------------------------------

#endif // #ifndef __GameManager_h_

//---------------------------------------------------------------------------
