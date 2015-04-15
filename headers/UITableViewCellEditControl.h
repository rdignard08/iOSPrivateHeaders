
@interface UITableViewCellEditControl : UIControl {

    UITableViewCell _cell;
    UIImageView _imageView;
    _UITableViewCellEditControlMinusView _minusView;
    UIImageView _shadowView;
    b2 _style;
    b1 _rotated;
    b1 _rotating;
    b1 _hiding;
    b27 _reserved;
}
 + ({CGSize=dd}) defaultSize;
 + (id) _multiSelectNotSelectedImage;
 + (id) _deleteImageBackground:(double)a;
 + ({CGRect={CGPoint=dd}{CGSize=dd}}) _minusRect;
 + (id) _deleteImage:(double)a;
 + (id) _insertImage:(double)a;
 + (id) _multiSelectHighlightedImage;
 + (id) _multiSelectSelectedImage;

 - (void) dealloc;
 - (void) layoutSubviews;
 - (BOOL) isRotating;
 - (void) setHighlighted:(BOOL)a;
 - (void) _multiselectColorChanged;
 - (void) setSelected:(BOOL)a;
 - (id) _currentImage;
 - (void) _toggleRotateAnimationDidStop:(id)afinished:(BOOL)b;
 - (void) setHiding:(BOOL)a;
 - (BOOL) isHiding;
 - (BOOL) isRotated;
 - (id) _shadowImage;
 - (void) setRotated:(BOOL)a;
 - (void) setRotated:(BOOL)aanimated:(BOOL)b;
 - (id) initWithTableViewCell:(id)aeditingStyle:(long long)b;
 - (void) _updateImageView;
 - (id) _minusView;
 - (void) _toggleRotate;
 - (void) setFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
