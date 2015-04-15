
@interface DOMValidityState : DOMObject {

}

 - (void) dealloc;
 - (void) finalize;
 - (BOOL) valid;
 - (BOOL) valueMissing;
 - (BOOL) typeMismatch;
 - (BOOL) patternMismatch;
 - (BOOL) tooLong;
 - (BOOL) rangeUnderflow;
 - (BOOL) rangeOverflow;
 - (BOOL) stepMismatch;
 - (BOOL) badInput;
 - (BOOL) customError;


@end
