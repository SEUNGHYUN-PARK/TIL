//
//  BookManager.swift
//  Console_BookManager
//
//  Created by 박승현 on 2018. 5. 22..
//  Copyright © 2018년 박승현. All rights reserved.
//

import Foundation
class BookManager{
    var bookList = [Book]()
    
    func registerBook(bookObject:Book)
    {
        bookList += [bookObject]
    }
    func showAllBooks() -> String
    {
        var strTemp = ""
        for bookTemp in bookList {
            strTemp += "Name : \(bookTemp.name!)\n"
            strTemp += "Genre : \(bookTemp.genre!)\n"
            strTemp += "Author : \(bookTemp.author!)\n"
            strTemp += "-----------------\n"
        }
        return strTemp
    }
    func countBooks() -> Int
    {
        return bookList.count
    }
    func searchBook(name:String) -> String?
    {
        var strTemp = ""
        for bookTemp in bookList {
            if bookTemp.name == name
            {
                strTemp += "Name : \(bookTemp.name!)\n"
                strTemp += "Genre : \(bookTemp.genre!)\n"
                strTemp += "Author : \(bookTemp.author!)\n"
                strTemp += "-----------------\n"
                return strTemp
            }
        }
        return nil

    }
    func removeBook(name:String) //스트링 값을 받아오면
    {
        for(index,value) in bookList.enumerated() // enumeraterd()를 사용하면 index와 value를 1:1 매칭시켜 탐색
        {
            if value.name == name{ // 해당 index의 name와 Param으로 전달받은 name과 같다면
                bookList.remove(at:index) // bookList의 해당 데이터 삭제®
            }
        }
    }
}
