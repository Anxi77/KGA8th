/*
이진 탐색 트리(Binary Search Tree)
-이진속성과 탐색속성을 적용한 트리
-이진 탐색을 통한 탐색영역을 절반으로 줄여가며 탐색
-탐색 : 자신의 노드보다 작은 값은 왼쪽 , 큰 값은 오른쪽에 위치


<이진 탐색트리 구현>
-이진 탐색 트리는 모든 노드들이 최대 2개의 자식 노드를 가질 수 있으며
자신의 노드보다 작은 값들은 왼쪽 , 큰 값들은 오른쪽에 위치함

<이진 탐색트리의 탐색>
-루트 노드부터 시작하여 탐색하는 값과 비교하여
-작은 경우 왼쪽으로 큰 경우 오른쪽 자식 노드를 탐색

<이진 탐색트리의 삽입>
-루트 노드부터 시작하여 삽입하는 값과 비교
-작은경우 왼쪽 , 큰 경우 오른쪽/
-만약 빈공간이 있으면 빈공간 에 삽입

<이진 탐색트리의 삭제>
-내가 지우려고 하는 노드에 자식이 있냐 없냐에 따라 다름
1. 자식이 0개인 노드의 삭제 : 단순 삭제 진행

2. 자식이 1개인 경우 : 삭제하는 노드의 부모와 자식을 연결한 후 삭제

3. 자식이 2개인 경ㅇ우 : 삭제하는 노드를 기준으로 오른쪽 자식 중 가장 작은 값 노드와 교체 후 삭제

이진 탐색트리를 중위순회 하게 되면 자동으로 정렬된다.

<이진탐색트리 주의점>

-이진 탐색트리는 최악의 상황에 노드들이 한쪽 자식으로만 추가되는 불균형 현상이 발생된다.
-이 경우에는 탐색영역이 절반으로 줄여지지 않기 때문에 시간복잡도가 증가
-이런 경우를 피하기 위해 자가균형 기능을 추가한 트리를 사용하는게 일반적

-이진트리를 활용하여 콘솔 프로젝트에 넣는다-
*/

///

