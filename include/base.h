#pragma once

#ifndef _BASE_H_
#define _BASE_H_
#include <stdlib.h>

#ifdef __cplusplus
extern "C"
{
#endif


	typedef struct Point
	{
		float x;
		float y;
		float z;
	};


	struct HalfEdge;
	typedef struct Vertex
	{
		struct HalfEdge *halfedge;
		struct Point pos;

	}Vertex;


	//typedef struct Edge
	//{
	//	struct HalfEdge* halfedge;
	//
	//
	//}Edge;
	typedef struct Face
	{
		struct HalfEdge* halfedge;

	}Face;
	typedef struct HalfEdge
	{
		struct HalfEdge* prev;
		struct HalfEdge* next;
		struct HalfEdge* opposite;
		Vertex* vertex;
		//Edge* edge;
		Face* face;




	}HalfEdge;


#ifdef __cplusplus
}
#endif


#endif // _BASE_H_

