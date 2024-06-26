# Database

## Database Management System (DBMS)
- Software for applications to control databases on a higher level.

## Relational Model
- A database abstraction proposes by Ted Codd to access databases in a high-level language.
- Definition
    - A relation is an unordered set that contain multiple rows of tuples (a table).
    - A tuple is a set of attribute values in the relation.
- Keys
    - Primary Keys: Uniquely identify a single tuple.
    - Foreign Keys

## Relational Algebra
- A procedural query that specifies how the DBMS should find the target.
- Operations
    - Select: Get rows matching the condition.
    $$
    \sigma_{condition}(Relation)
    $$

    - Projection: Get columns matching the given column names.
    $$
    \Pi_{A_1, A_2, \cdots, A_n}(Relation)
    $$

    - Cross Product (Cartesian Product): Combine two relations so that every tuple in one relation is matched with every tuple in the other.
    $$
    Relation_A \times Relation_B
    $$

    - Natural Join: Cross product, but equality is enforced for attributes with the same name and duplicate attributes are deleted.
    $$
    Relation_A \bowtie Relation_B
    $$

    - Union: Combine two sets of values with the same attribute name and schema.
    $$
    Relation_A \cup Relation_B
    $$

    - Intersection
    $$
    Relation_A \cap Relation_B
    $$

    - Difference
    $$
    Relation_A - Relation_B
    $$
