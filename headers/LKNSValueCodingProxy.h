
@interface LKNSValueCodingProxy : CACodingProxy {

    int _kind;
    (?="point"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}"rect"{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}}"transform"{CATransform3D="m11"d"m12"d"m13"d"m14"d"m21"d"m22"d"m23"d"m24"d"m31"d"m32"d"m33"d"m34"d"m41"d"m42"d"m43"d"m44"d}"point3d"{CAPoint3D="x"d"y"d"z"d}"color_matrix"{CAColorMatrix="m11"f"m12"f"m13"f"m14"f"m15"f"m21"f"m22"f"m23"f"m24"f"m25"f"m31"f"m32"f"m33"f"m34"f"m35"f"m41"f"m42"f"m43"f"m44"f"m45"f}) _u;
}

 - (id) .cxx_construct;
 - (id) initWithObject:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) decodedObject;


@end
