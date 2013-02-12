#ifndef DXFTESS_H_
#define DXFTESS_H_

class DxfData;
class PolySet;
void dxf_tesselate(PolySet *ps, DxfData &dxf, double rot, double scale, bool up, bool do_triangle_splitting, double h);
void dxf_border_to_ps(PolySet *ps, const DxfData &dxf);

#endif
