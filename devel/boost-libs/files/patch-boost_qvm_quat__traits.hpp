--- boost/qvm/quat_traits.hpp.orig	2025-03-01 04:01:51 UTC
+++ boost/qvm/quat_traits.hpp
@@ -79,7 +79,7 @@ write_quat_element_idx( int i, Q & q, typename quat_tr
     void>::type
 write_quat_element_idx( int i, Q & q, typename quat_traits<Q>::scalar_type s )
     {
-    quat_traits<Q>::template write_element_idx(i, q) = s;
+    quat_traits<Q>::write_element_idx(i, q) = s;
     }
 
 template <class Q>
@@ -89,7 +89,7 @@ write_vec_element_idx( int i, Q & q, typename quat_tra
     void>::type
 write_vec_element_idx( int i, Q & q, typename quat_traits<Q>::scalar_type s )
     {
-    quat_traits<Q>::template write_element_idx(i, q, s);
+    quat_traits<Q>::write_element_idx(i, q, s);
     }
 
 } }
