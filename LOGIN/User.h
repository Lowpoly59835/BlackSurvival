#pragma once
#include "ssocket.h"

class User
{
public:
	void InitPeer(SOCKET socket, SOCKADDR_IN addr, int userid) { m_peer.InitPeer(socket, addr, userid); }
	BOOL RecvPacket(int DwNumberBytes) { return m_peer.RecvPacket(DwNumberBytes); }
	void CheckSendPacket() { m_peer.CheckSendPacket(); }
	int GetID() { return m_peer.GetId(); }
	void PacketProcess(BTZPacket* packet);
	void RelaseUser() { m_peer.ReleaseSocket(); }

public:
	User();
	~User();

private:
	SPeer m_peer;
};
