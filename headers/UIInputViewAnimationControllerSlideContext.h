
@interface UIInputViewAnimationControllerSlideContext : NSObject {

    UIView _snapshot;
    UIInputViewSetPlacement _endPlacement;
    {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _snapshotEndFrame;
}
@property (nonatomic, retain, readwrite) UIView* snapshot;
@property (nonatomic, assign, readwrite) NSNumber* snapshotEndFrame;
@property (nonatomic, retain, readwrite) UIInputViewSetPlacement* endPlacement;

 - (void) dealloc;
 - (id) snapshot;
 - (void) setSnapshot:(id)a;
 - (void) setSnapshotEndFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (void) setEndPlacement:(id)a;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) snapshotEndFrame;
 - (id) endPlacement;


@end
