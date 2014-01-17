//This is the BSP header file where all of the structs are defined
//
//
//
struct direntry{
	int offset; //start of the lump
	int length; //length of lump
};

struct header{
	char magic[4];
	int version;
	direntry direntries[16];
};

struct entitie{
	char* ents;
};

struct texture{
	char name[64];
	int flags;
	int contents;
};

struct plane{
	float normal[3] ; //plane normal
	float dist; //distance from origin plane along normal
};

struct node{
	int plane; //plane index
	int children[2];
	int mins[3] ;
	int maxes[3] ;
};	

struct leaf{
	int lcuster;
	int area;
	int mins[3];
	int maxes[3];
	int leafface;
	int n_leaffaces;
	int leafbrush;
	int n_leafbrushes;
};

struct leafface{
	int face;
};

struct leafbrush{
	int brush;
};

struct model{
	float mins[3];
	float maxs[3];
	int face;
	int n_faces;
	int brush;
	int n_brushes;
};

struct brush{
	int brushside;
	int n_brushsides;
	int texture;
};

struct brushside{
	int plane;
	int texture;
};

struct vertex{
	float position[3];
	float texcoord[2][2];
	float normal[3];
	unsigned char color[4];
};

struct meshvert{
	int offset;
};

struct effect{
	char name[64];
	int brush;
	int unknown;
};

struct face{
	int texture;
	int effect;
	int type;
	int vertex;
	int n_vertexes;
	int meshvert;
	int n_meshverts;
	int lm_index;
	int lm_start[2];
	int lm_size[2];
	float lm_origin[3];
	float lm_vecs[2][3];
	float normal[3];
	int size[2];
};

struct lightmap{
	unsigned char map[128][128][3];
};

struct lightvol{
	unsigned char ambiant[3];
	unsigned char directional[3];
	unsigned char dir[2];
};

struct visdata{
	int n_vecs;
	int sz_vecs;
	unsigned char vecs;
};
