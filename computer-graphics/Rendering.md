# Graphics Rendering Pipeline

1. Application
- Driven by the application and may run either on the CPU or GPU (compute shader).
- Output: Rendering primitives (points, lines, triangles)

2. Geometry Processing
- Transforms, projections, and geometry handling.
- Substages
    1. Vertex Shading
        - Compute the position for a vertex and evaluate necessary vertex output data (normals and texture coordinates).
        - Model space coordinates are transformed into world space coordinates and camera space coordinates.
    2. Projection
    3. Clipping
    4. Screen Mapping

3. Rasterization
- Takes three input vertices, and finds all pixels inside that triangle.

4. Pixel Processing
- Determine each pixel's color and visibility.
