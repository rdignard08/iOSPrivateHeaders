
@interface DOMWebKitCSSMatrix : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (void) setC:(double)a ;
 - (double) c;
 - (double) a;
 - (void) setA:(double)a ;
 - (double) b;
 - (void) setB:(double)a ;
 - (double) d;
 - (void) setD:(double)a ;
 - (double) e;
 - (void) setE:(double)a ;
 - (double) f;
 - (void) setF:(double)a ;
 - (double) m11;
 - (void) setM11:(double)a ;
 - (double) m12;
 - (void) setM12:(double)a ;
 - (double) m13;
 - (void) setM13:(double)a ;
 - (double) m14;
 - (void) setM14:(double)a ;
 - (double) m21;
 - (void) setM21:(double)a ;
 - (double) m22;
 - (void) setM22:(double)a ;
 - (double) m23;
 - (void) setM23:(double)a ;
 - (double) m24;
 - (void) setM24:(double)a ;
 - (double) m31;
 - (void) setM31:(double)a ;
 - (double) m32;
 - (void) setM32:(double)a ;
 - (double) m33;
 - (void) setM33:(double)a ;
 - (double) m34;
 - (void) setM34:(double)a ;
 - (double) m41;
 - (void) setM41:(double)a ;
 - (double) m42;
 - (void) setM42:(double)a ;
 - (double) m43;
 - (void) setM43:(double)a ;
 - (double) m44;
 - (void) setM44:(double)a ;
 - (void) setMatrixValue:(id)a ;
 - (id) multiply:(id)a ;
 - (id) inverse;
 - (id) translate:(double)a y:(double)b z:(double)c ;
 - (id) scale:(double)a scaleY:(double)b scaleZ:(double)c ;
 - (id) rotate:(double)a rotY:(double)b rotZ:(double)c ;
 - (id) rotateAxisAngle:(double)a y:(double)b z:(double)c angle:(double)d ;
 - (id) skewX:(double)a ;
 - (id) skewY:(double)a ;
 - (id) toString;


@end
