package com.demo.jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class JDBC_Connection {
    public static void main(String[] args) throws Exception {

        String url = "jdbc:mysql://localhost:3306/test?useSSL=false&serverTimeZone=GMT";
        String username = "root";
        String password = "232330";
        Connection conn = DriverManager.getConnection(url, username, password);

        String sql1 = "update stu set age = 23 where name like '周安'";
        String sql2 = "update stu set name = '周某人' where age = 999";

        Statement stmt = conn.createStatement();

        try {
            // 开启事务
            // conn.setAutoCommit(false);
            int count1 = stmt.executeUpdate(sql1);
            System.out.println(count1);
            // int s = 3/ 0;
            int count2 = stmt.executeUpdate(sql2);
            System.out.println(count2);

            // 提交事务
            conn.commit();
        } catch (SQLException e) {
            // 回滚事务
            conn.rollback();
            throw new RuntimeException(e);
        }


        stmt.close();
        conn.close();
    }
}
