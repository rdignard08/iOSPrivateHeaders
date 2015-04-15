
@protocol UILayoutSupport;
@interface _UILayoutGuide : UIView <UILayoutSupport> {

    BOOL _allowsArchivingAsSubview;
    BOOL _horizontal;
    NSArray* _constraintsToRemoveAtRuntime;
    NSString* _archivedIdentifier;
}
 + (id) classFallbacksForKeyedArchiver;
 + (id) _verticalLayoutGuide;
 + (id) _horizontalLayoutGuide;

 - (void) dealloc;
 - (BOOL) _isFloatingLayoutItem;
 - (BOOL) _allowsArchivingAsSubview;
 - (id) _layoutVariablesWithAmbiguousValue;
 - (id) _archivedIdentifier;
 - (id) _constraintsToRemoveAtRuntime;
 - (void) _setConstraintsToRemoveAtRuntime:(id)a;
 - (id) _relevantLayoutVariables;
 - (void) _setUpCounterDimensionConstraint;
 - (void) _setAllowsArchivingAsSubview:(BOOL)a;
 - (void) _setArchivedIdentifier:(id)a;
 - (void) _setHorizontal:(BOOL)a;
 - (double) length;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithFrame:({CGRect={CGPoint=dd}{CGSize=dd}})a;
 - (BOOL) isHorizontal;


@end
