//
//  Deck.h
//  Matchismo
//
//  Created by Xiaoxuan Wang on 13/11/13.
//  Copyright (c) 2013 brandsfever. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
