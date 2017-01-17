//
//  TPKeyboardAvoidingProtocols.h
//  TPKeyboardAvoidingSample
//
//  Created by Vladimir Khramtsov on 17.01.17.
//  Copyright © 2017 A Tasty Pixel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol TPKeyboardAvoidingAllowProtocol <UITextInput>

- (BOOL)shouldTPKeyboardAvoidKeyboard;

@end
