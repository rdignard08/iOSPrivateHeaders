
@interface UIKeyboardBehaviors_Handwriting : TIKeyboardBehaviors {

    BOOL _usesCandidateSelection;
}

 - (BOOL) usesCandidateSelection;
 - (id) keyBehaviorsForState:(id)a;
 - (void) setUsesCandidateSelection:(BOOL)a;


@end
